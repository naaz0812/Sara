alert("Welcome back Sara!");
function display(){
    let input=document.getElementById("input");
    let value= input.value;

   let check=document.createElement("input");
   check.type="checkbox";

   let delBtn=document.createElement("button");
   delBtn.innerHTML="🗑️";
   
 
   let li= document.createElement("li");
   
   let ul= document.getElementById("List");
  // li.textContent=value;
   li.append(check,value,delBtn);
   ul.appendChild(li);

   check.addEventListener("click", function throwline(){
    if(check.checked){
        li.style.textDecoration="line-through";
        li.style.color="grey";  
    }

    else{
        li.style.textDecoration="none";
         li.style.color="black";
    }
   })


   delBtn.addEventListener("click", function delete(){
    ul.removeChild(li);

    setTimeout(function()  {
        alert("Item Deleted!");
    }, 0);
   })






    input.value="";
}