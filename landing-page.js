console.log("hello");

const btn = document.querySelector("#signup-btn");
const form = document.querySelector(".wrapper");
const closeBtn = document.querySelector(".close-wrapper");

// console.log(btn);
// function abc(){

// }
// abc()

// const abc=()=>{
//     console.log("hii");
// }

btn.addEventListener("click", () => {
  console.log("clicked");
  form.style.display = "block";
});
closeBtn.addEventListener("click", () => {
  form.style.display = "none";
});

const namePattern = /^[a-zA-Z\s]{2,24}$/;
const contactPattern = /^\+91-[0-9]{10}$/;
const emailPattern = /^[a-z0-9\.]+@[a-z]+\.[a-z\.]{3,8}$/;

// const obj = {
//     username : "Mukesh1231",
//     age : 24,
//     email : "mukesh123@gmail.com",
//     getData : ()=>{

//     }
// }
const patterns = {
  name: /^[a-zA-Z\s]{2,24}$/,
  email: /^[a-z0-9\.]+@[a-z]+\.[a-z\.]{3,8}$/,
  contact: /^\+91-[0-9]{10}$/,
};

const inputs = document.querySelectorAll('.wrapper input[type="text"]');

const validateForm = (name, field) => {
  console.log(field, name, field.value);
  if (field.value) {
    if (paterns[name].test(field.value)) {
      field.classList.add("success");
      field.classList.remove("failure");
    } else {
      field.classList.add("failure");
      field.classList.remove("success");
    }
  } else {
    field.classList.remove("success");
    field.classList.remove("failure");
  }
};

console.log(input);

// const arr = [4, "mukesh",true]
for (let i = 0; i < inputs.length; i++) {
  console.log(inputs[i]);
  inputs[i].addEventListener("keyup", (e) => {
    if (e.target.name != "captcha") {
      validateForm(e.target.name, e.target);
    }
  });
}
let generatedCaptcha = "";
function createCaptcha() {
  let chars = "qwertyuiopasdfghjklzxcvbnm1234567890@#$";
  
  for (let i = 0; i < 5; i++) {
    let num = Math.round(Math.random() * chars.length - 1);
    generatedCaptcha += chars[num];
  }
  console.log(generatedCaptcha);
  document.querySelector(".captcha-text").innerText = generatedCaptcha;
}
document
  .querySelector("captcha-reload-icon")
  .addEventListener("click", createCaptcha);
createCaptcha();

document.querySelector('.wrapper form').addEventListener('submit',(e)=>)
    e.preventDefault()
    const userCaptcha = document.querySelector('input[name="captcha"]').value

    console.log(userCaptcha);
    if(userCaptcha == generatedCaptcha){
        // alert("Form Submitted Successfully!!!")
        window.navigator.geolocation.getCurrentPosition((pos)=>{
            console.log(pos.coords.latitude,pos.coords.longitude);
        },
        ()=>{
            alert("Location blocked");
        }
      );
    } else{
        alert("Incorrect Captcha");
    }
     });
