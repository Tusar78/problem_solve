const container = document.querySelector('.range-slider');
const slider = container.querySelector(".slider");
const thumb = container.querySelector('.slider-thumb');
const tooltip = container.querySelector('.tooltip-value');
const progress = container.querySelector('.progress');

function customSlider() {
  const maxVal = slider.getAttribute('max');
  const val = (slider.value / maxVal) * 100 + "%";

  tooltip.innerHTML = slider.value;
  progress.style.width = val;
  thumb.style.left = val;

  
}

customSlider();

slider.addEventListener('input', () => {
  customSlider();
})

// slider.oninput = function () {
//   tooltip.innerHTML = this.value;
//   // let offset = 45;

//   // Position the tooltip on the thumb
//   var thumbWidth = slider.offsetHeight;
//   var thumbPosition =
//     ((this.value - this.min) / (this.max - this.min)) *
//     (slider.offsetWidth - thumbWidth);
//   var tooltipPosition =
//     thumbPosition - tooltip.offsetWidth / 2 + thumbWidth / 2;
//   tooltip.style.left = `${tooltipPosition}px`;
// };