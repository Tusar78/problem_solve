const slideValue = document.querySelector('.popup');
const slideText = document.querySelector('.popup-text');
const inputSlider = document.querySelector('.range-input');
inputSlider.oninput = (() => {
  let value = inputSlider.value;
  slideValue.textContent = value;
  slideText.style.left = (value / 2) + "%";
})