const myNews = [
  {
    a: 'Damir',
    b: 'Some news here'
  },
  {
    a: 'Damir',
    b: 'Some news here 1'
  },
  {
    a: 'Damir',
    b: 'Some news here 2'
  },
  {
    a: 'Damir',
    b: 'Some news here 3'
  }
];

var News = React.createClass({
  render: function() {

    var data = this.props.data;

    var newsTemplate = data.map(function(item, index){
      return (
        <div key={index}>
          <p className="news__a">{item.a}</p>
          <p className="news__b">{item.b}</p>
        </div>
      )
    })

    return (
      <div className="news">
        {newsTemplate}
      </div>
    );
  }
});

var Comments = React.createClass({
  render: function() {
    return (
      <div className="comments">
        Нет новостей - комментировать нечего
      </div>
    );
  }
});

var App = React.createClass({
  render: function() {
    return (
      <div className="app">
        Всем привет, я компонент App! Я умею отображать новости.
        <News data={myNews}/>
        <Comments />
      </div>
    );
  }
});

ReactDOM.render(
  <App />,
  document.getElementById('root')
);
