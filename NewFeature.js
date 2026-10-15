function add(a,b){
  c = ()=>{
    return a+b;
  }
  return c(a,b);
}

console.log(add(5,5))