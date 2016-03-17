var fn = function(one, two) {
  console.log(this, one, two);
};

var r = {}, g = {}, b = {}, y = {};
r.method = fn;
// r.method(g, b);                //    {r}     ,   {g}     ,   {b}
// fn(g, b);                      //  <global>  ,   {g}     ,   {b}
// fn.call(r, g, b);              //    {r}     ,   {g}     ,   {b}
// r.method.call(y, g, b);        //    {y}     ,   {g}     ,   {b}
// setTimeout(fn, 1000);          //  <global>  , undefined , undefined
// setTimeout(r.method, 1000);    //  <global>  , undefined , undefined
// setTimeout(function() {
//             r.method(g, b);    //    {r}     ,   {g}     ,   {b}
//           }, 1000);
// console.log(one);              //  throws an error
// console.log(this);             //  <global>
new r.method(g, b);               //    {p}      ,   {g}     ,   {b}      //  a brand new object gets created
