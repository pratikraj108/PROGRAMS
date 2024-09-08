//object initialization structure

const circle={
    radius:'20',
    pi:'3.14',


    //method
    showArea:function(){
        console.log(this.pi*this.radius*this.radius);
    }
};

circle.showArea();
// console.log("Area is:")
console.log(typeof(circle));


//Factory Function
function getstudentdetails(fname,lname,addr){
    return {
        //properties
        fname,
        lname,
        addr,
        //methods
        showFullName:function(){
            console.log(fname+''+lname);
        }
    };
}
const student_1=getstudentdetails('Pratik','Raj','Siwan');
student_1.showFullName();

//constructor function
function Student(fname,lname,addr){
    this.fname=fname,
    this.lname=lname,
    this.addr=addr,

    this.showFullName=function(){
        console.log(this.fname+' '+this.lname+' '+this.addr);
        console.log(this.addr);

    }
}

const student_2=new Student('Virat','kohli','delhi');
student_2.showFullName();
console.log(typeof(student_2));
//adding new propeties
student_2.college_name='SKIT';
console.log(student_2.college_name);
//delete a existing properties
delete student_2.college_name;
console.log(student_2.college_name);


//using a class
class Employee{
    constructor(fname,lname,addr){
        this.fname=fname;
        this.lname=lname;
        this.addr=addr;
    }
    showFullName(){
        console.log(this.fname+' '+this.lname+' '+this.addr);
    }
}
const emp_1=new Employee('Pratik','Raj','Bihar');
emp_1.showFullName();
console.log(emp_1.fname);
console.log(emp_1.lname);

