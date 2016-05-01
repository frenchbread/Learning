"use strict"

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

const News = React.createClass({
  render () {

    const data = this.props.data;

    const newsTemplate = data.map((item, index) => {
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

const Comments = React.createClass({
  render () {
    return (
      <div className="comments">
        Нет новостей - комментировать нечего
      </div>
    );
  }
});

const App = React.createClass({
  render () {
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
