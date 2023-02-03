#logo {
  position: relative;
  width: 300px;
  height: 300px;
  border-radius: 50%;
  margin: 50px auto;
  overflow: hidden;
}
#logo::before {
  position: absolute;
  content: "";
  display: block;
  width: 60%;
  height: 60%;
  background-color: #f1f1f1;
  border-radius: 50%;
  top: 0;
  bottom: 0;
  left: 0;
  right: 0;
  margin: auto;
  z-index: 4;
}
.red {
  width: 78%;
  height: 42%;
  position: absolute;
  background-color: #f44336;
  transform: rotateZ(-40deg);
}
.yellow {
  width: 40%;
  height: 40%;
  position: absolute;
  z-index: 3;
  background-color: #ffc107;
  left: -15%;
  bottom: 32%;
  margin: auto;
  transform: rotateZ(-50deg);
}
.green {
  width: 100%;
  height: 50%;
  position: absolute;
  bottom: 0;
  background-color: #4caf50;
  z-index: 2;
}
.blue {
  width: 35%;
  height: 32%;
  position: absolute;
  top: 50%;
  right: 0;
  z-index: 2;
  background-color: #4285f4;
  transform: rotateZ(45deg);
}
.gline {
  width: 50%;
  height: 20%;
  position: absolute;
  top: 0;
  bottom: 0;
  right: 0;
  margin: auto;
  background-color: #4285f4;
  z-index: 5;
}
