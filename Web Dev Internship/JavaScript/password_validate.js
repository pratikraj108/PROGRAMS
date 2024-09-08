class Login{
    constructor(email,password){
        this.email=email;
        this.password= password;
    }
    //login function whose email='admin@skit.ac.in' and password='1234'
    password_validate (email,password){
        if(email== '' || password==''){
            return 'please enter email and password';
        }
        else if(email === 'admin@skit.ac.in' || password === '1234'){
            return 'login successful';
        }
        else{
            return 'Inavlid email or password';
        }
    }
}
confirm.log(email);