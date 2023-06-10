* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}
body {
  font-family: "Josefin Sans", sans-serif;
}
.strip-1 {
  width: 100%;
  height: 2.5rem;
  background-color: black;
  display: flex;
  justify-content: center;
  align-items: center;
  font-size: 1.1rem;
  font-family: "Nunito", Helvetica, sans-serif;
}
header {
  position: sticky;
  top: 0;
  left: 0;
  z-index: 100;
}
.strip-1 p {
  color: aliceblue;
}
.strip-2 {
  width: 100%;
  height: 3rem;
  background-color: #fff;
  display: flex;
}
.strip-2_logo {
  width: 22%;
  height: 100%;
  display: flex;
  justify-content: end;
}
.strip-2_logo img {
  width: 60%;
  height: 100%;
}

.strip-2_search {
  width: 50%;
  height: 100%;
  display: flex;
  justify-content: end;
  align-items: center;
  margin-left: 17rem;
}
.strip-2_search > div {
  width: 30%;
  height: 70%;
  background-color: #f6f6f6;
  display: flex;
  border-radius: 3rem;
}
.strip-2_search > div input {
  width: 80%;
  height: 100%;
  background-color: inherit;
  outline: 0;
  border: 0;
  padding: 10px;
  border-radius: inherit;
}
.strip-2_search > div img {
  width: 20%;
  height: 100%;
}
.strip-2_icon {
  width: 25%;
  height: 100%;
  display: flex;
  align-items: center;
  cursor: pointer;
}
.strip-2_icon img {
  width: 20%;
  height: 60%;
}
.strip-3 {
  width: 100%;
  height: 3.5rem;
  display: flex;
  justify-content: center;
  background-color: #fff;
}
nav {
  width: 70%;
  height: 100%;
  display: flex;
  justify-content: space-between;
  align-items: center;
}
nav a {
  text-decoration: none;
  color: black;
  font-size: 1.2rem;
}

.latest-products {
  width: 100%;
  height: auto;
  display: flex;
  justify-content: center;
}
.latest-products-item {
  width: 70%;
  height: auto;
}
.latest-products-title {
  width: 100%;
  height: 4rem;
  display: flex;
  align-items: center;
  font-size: 1.7rem;
}
.latest-products-cards {
  width: 100%;
  height: auto;
  display: flex;
  flex-wrap: wrap;
  justify-content: space-between;
}

.latest-products-cards .card {
  width: 23%;
  height: 20rem;
  text-align: center;
}
.latest-products-cards .card img {
  width: 100%;
  height: 80%;
}

.latest-products-cards .card p {
  color: #222222;
}
.latest-products-cards .card p:nth-of-type(2) {
  color: red;
  font-weight: bold;
  padding-top: 2px;
}

nav {
  position: relative;
}
nav a {
  text-decoration: none;
  color: #333;
  font-size: 0.9rem;
}
.nav-item {
  padding: 1rem 0rem;
  z-index: 100;
}
.nav-item img{
   width: 10%;
  margin-top: 2rem;
  margin-left: 2rem;
  height: 50%;
}
.nav-item-dropdown {
  background-color: #fff;
  position: absolute;
  top: 3.5rem;
  left: 0rem;
  width: 100%;
  height: 20rem;
  display: none;
}
.edit-menus {
  display: flex;
  margin-left: 3rem;
  line-height: 2.5rem;
}
.edit-1 {
  padding-left: 10rem;
}
.edit-menus2 {
  display: flex;
  /* margin-left: 3rem; */
  line-height: 1.5rem;
}
.he1 {
  font-weight: bold;
}
.boldd {
  font-weight: bold;
}
.sgreen a {
  color: #126b45;
  font-weight: bold;
}
.edit-2 {
  margin-left: 20%;
  width: 20%;
  height: 10%;
}
.he2 img {
  width: 90%;
  margin-top: 2rem;
  margin-left: 12rem;
  height: 90%;
}
.nav-item-dropdown div {
  margin-top: 5px;
  margin-left: 10px;
}
.nav-item:hover {
  border-bottom: 3px solid green;
}
.nav-item:hover .nav-item-dropdown {
  display: block;
}