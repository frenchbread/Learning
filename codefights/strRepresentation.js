var n = 35;
var arr = [];
var arr2 = [];
for (var i = 0; i < n; i++) {
  arr.push(i+1);
}
arr.forEach(function (a) {
  if (a % 5 === 0) {
    arr2.push("Code")
  } else if (a % 7 === 0) {
    arr2.push("Fight")
  } else {
    arr2.push(a.toString())
  }
})

console.log(arr2);
