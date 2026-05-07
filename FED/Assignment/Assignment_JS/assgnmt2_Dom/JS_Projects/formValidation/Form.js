alert("Welcom back!");





function noName(){

    const name=document.getElementById("name").value;
    name.trim()

    const email=document.getElementById("email").value;
    email.trim()

    const password=document.getElementById("password").value;
    password.trim()

    const confirm=document.getElementById("confirm").value;
    confirm.trim()

    const phone=document.getElementById("phone").value;
    phone.trim()

    let errName=document.getElementById("nameErr").value;
    errName="";

    let errEmail=document.getElementById("emailErr").value;
    errEmail="";

    let errPass=document.getElementById("passErr").value;
    errPass="";

    let errConfirm=document.getElementById("confirmErr").value;
    errConfirm="";

    let errPhone=document.getElementById("phoneErr").value;

    errPhone="";


    if(name.length<=3){
        //print- number of letters should be more than 3
        if(name.value==""){
            //Print- Name section can't be empty!
        }

    }




    if(email.value==""){
          //Print- email section can't be empty!
          //pattern check
    }

    if(password.length<8){
        //Print- password should has atleast 8 characters
    }

    if


    // function add(){
       
    //     return 5+4;

    //   }
    //   let sum;
    //   sum=add();

    // console.log(name);
    //  console.log(email);
    //   console.log(password);
    //   console.log(sum);
    //    console.log(confirm);
    //     console.log(phone);


    

}