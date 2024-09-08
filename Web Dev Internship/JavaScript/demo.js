// let firstname="Pratik";
// console.log(firstname);

// let firstName="Pratik";
// let lastName ="Raj";
// console.log(firstName+" "+lastName);

//  let firstName="Rexha";
//  let lastName ="Bebe";
//  for( let i=0;i<=5;i++){
//     console.log(i);}
//         let a = 2;
// console.log(a);
function validateForm() {
    let x= document.form["myForm"]["fname"].value;
    if(x=="") {
        alert("Name must be filled out");
    }
    else{
        alert ("you entered correct name");
    }
}