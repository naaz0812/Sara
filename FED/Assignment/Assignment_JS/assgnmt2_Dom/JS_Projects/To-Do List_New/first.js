alert("Welcome Back Sara!");


function display(){
    let input=document.getElementById("input");
    let value=input.value;

    let check=document.createElement("input");
    check.type="checkbox";

    let li= document.createElement("li");
    let p= document.createElement("p");
    let ul=document.getElementById("list");
    let deletebtn=document.createElement("button");
    let editBtn=document.createElement("button");
    editBtn.innerHTML = "✏️"
    deletebtn.innerHTML="🗑️";
    li.classList.add("item");
    p.innerHTML= value
    li.append(check,p, editBtn, deletebtn);

    ul.appendChild(li);

    
    input.value= "";

    check.addEventListener("click", function throwline(){
    if(check.checked){
         li.style.textDecoration="line-through";
         li.style.color="skyblue";

    }
    
    else{
        li.style.textDecoration="none";
         li.style.color="black";
    }      
})

deletebtn.addEventListener("click", function deleteList(){
    ul.removeChild(li);

    setTimeout(function (){


    alert("Item Deleted!");
        },0);
})


editBtn.addEventListener("click",(e)=>{
    var clutter = p.innerHTML
    p.innerHTML = "   "
  
    document.addEventListener("keydown",(e)=>{

        if( e.key == "Backspace"){
            p.innerText = p.innerText.slice(0,-1)
        }else{
        p.innerText=p.innerText + e.key;

        }
        console.log(e.key)
       
    
    })
    
})

}



//   let check=document.createElement("input");
//    check.type="checkbox";

//  check.addEventListener("onclick", function throwline(){
//     li.style.textDecoration=" line-through";
// })











// function display(){
//     let input=document.getElementById("input");
//     let value=input.value;
//     let check=document.createElement("input");
//     check.type="checkbox";
//     let li= document.createElement("li");
//     li.append(check);
//     li.textContent=value;
//     let ul=document.getElementById("list");
//     ul.appendChild(li);
//     input.value= "";
// }