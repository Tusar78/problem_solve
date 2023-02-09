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