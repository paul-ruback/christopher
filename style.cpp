/* CSS for enigmatic cloud button styling */
#cloud-home-button {
  position: fixed;
  bottom: 20px;
  right: 20px;
  z-index: 1000;
  text-decoration: none;
}

.cloud {
  width: 100px;
  height: 60px;
  background: rgba(255, 255, 255, 0.9);
  border-radius: 50px;
  position: relative;
  display: flex;
  justify-content: center;
  align-items: center;
  box-shadow: 0 3px 10px rgba(0, 0, 0, 0.2);
  transition: all 0.3s ease;
  border: 2px solid rgba(0, 0, 0, 0.8);
}

/* Cloud bumps to create full cloud shape */
.cloud:before {
  content: '';
  position: absolute;
  top: -25px;
  left: 25px;
  width: 35px;
  height: 35px;
  background: rgba(255, 255, 255, 0.9);
  border-radius: 50%;
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
  border: 2px solid rgba(0, 0, 0, 0.8);
  z-index: -1;
}

.cloud:after {
  content: '';
  position: absolute;
  top: -20px;
  right: 20px;
  width: 40px;
  height: 40px;
  background: rgba(255, 255, 255, 0.9);
  border-radius: 50%;
  box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
  border: 2px solid rgba(0, 0, 0, 0.8);
  z-index: -1;
}

/* Additional side bumps */
.cloud::before {
  box-shadow: 
    -30px 10px 0 -5px rgba(255, 255, 255, 0.9),
    30px 10px 0 -5px rgba(255, 255, 255, 0.9);
}

/* Face styling */
.face {
  position: relative;
  width: 70px;
  height: 40px;
}

.eyes {
  display: flex;
  justify-content: space-between;
  width: 40px;
  margin: 0 auto;
  padding-top: 5px;
}

.eye {
  width: 8px;
  height: 16px;
  background: #333;
  border-radius: 50%;
}

.cheeks {
  display: flex;
  justify-content: space-between;
  width: 60px;
  margin: 5px auto 0;
}

.cheek {
  width: 12px;
  height: 8px;
  background: #ffb6c1;
  border-radius: 50%;
  opacity: 0.7;
}

.mouth {
  width: 20px;
  height: 10px;
  border-bottom: 2px solid #333;
  border-radius: 50%;
  margin: 5px auto 0;
}

/* Hover effects */
.cloud:hover {
  transform: translateY(-5px);
  box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
}
