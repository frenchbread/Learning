"use strict"

const myNews = [
  {
    author: 'Damir',
    text: 'Some news here'
  },
  {
    author: 'Damir',
    text: 'Some news here 1'
  },
  {
    author: 'Damir',
    text: 'Some news here 2'
  },
  {
    author: 'Damir',
    text: 'Some news here 3'
  }
];

const App = React.createClass({
  render () {
    return (
      <div className="app">
        <h1>The News.</h1>
        <hr/>
        <News data={myNews}/>
      </div>
    );
  }
});

const News = React.createClass({
  render () {
    const data = this.props.data;

    let newsTemplate;

    if (data.length > 0) {
      newsTemplate = data.map((item, index) => {
        return (
          <div key={index}>
            <Article data={item} />
          </div>
        )
      });
    } else {
      newsTemplate = <p>Unfortunately there are no any news.</p>
    }

    return (
      <div className="news">
        {newsTemplate}
        <strong className={(data.length > 0) ? '' : 'none'}>{data.length} articles found.</strong>
      </div>
    );
  }
});

const Article = React.createClass({
  render () {
    const author = this.props.data.author;
    const text = this.props.data.text;

    return (
      <div>
        <b className="news__author">{author}</b>
        <p className="news__text">{text}</p>
        <hr/>
      </div>
    )
  }
})

ReactDOM.render(
  <App />,
  document.getElementById('root')
);
