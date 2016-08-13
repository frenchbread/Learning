if (Meteor.isClient) {

  Template.hello.created = function () {

    const instance = this;

    instance.feed = new ReactiveVar();

    const data = {
      user: 'frenchbread',
      per_page: 100,
      page: 1
    }

    instance.autorun(function(){
      Meteor.call('callApi', data, function (err, feed) {

        if (err) console.log(err);

        instance.feed.set(feed);

      })
    });

  }


  Template.hello.helpers({
    feed: function(){
      const instance = Template.instance();

      const feed = instance.feed.get();

      _.each(feed, function (item) {
        console.log(item.payload)
      })

      return feed
    },
    prettyDate: function (date) {

      return moment(date).format('DD MMMM YYYY')
    }
  });



}

if (Meteor.isServer) {

  Meteor.startup(function () {

    const GithubApi = Meteor.npmRequire('github');

    Github = new GithubApi({
      version: "3.0.0"
    });
  });

  Meteor,Meteor.methods({
    callApi:function(data){

      const feeds = Async.runSync(function(done) {
        Github.events.getFromUserPublic(data, function(err, data) {
          if (err) done(err, null);
          done(null, data);
        });
      });
      return feeds.result;
    }
  });
}
