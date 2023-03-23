let toggles = document.getElementsByClassName("faq__toggle");
let faqItem = document.getElementsByClassName("faq__item");
let contentDiv = document.getElementsByClassName("faq__content");
let linkItems = document.getElementsByClassName("faq__content--link");
console.log(linkItems);

for (let i = 0; i < toggles.length; i++) {
  toggles[i].addEventListener("click", () => {
    if (parseInt(contentDiv[i].style.height) != contentDiv[i].scrollHeight) {
      contentDiv[i].style.height = contentDiv[i].scrollHeight + "px";
      toggles[i].style.color = "#fff";
      toggles[i].style.backgroundColor = "#7A00FF";
    } else {
      contentDiv[i].style.height = "0px";
      toggles[i].style.color = "#1B1E35";
      toggles[i].style.backgroundColor = "#fff";
    }

    for (let j = 0; j < contentDiv.length; j++) {
      if (j !== i) {
        contentDiv[j].style.height = "0px";
        toggles[j].style.color = "#1B1E35";
        toggles[j].style.backgroundColor = "#fff";
      }
    }
  });
}

for (let i = 0; i < linkItems.length; i++) {
  const element = linkItems[i];
  const lightGray = "lightgray";
  element.style.borderLeftColor = lightGray;
  element.style.color = "#737583";
  linkItems[i].addEventListener("click", function () {
    if (this.style.borderLeftColor == lightGray) {
      this.style.borderLeftColor = "#7A00FF";
      element.style.color = "#7A00FF";
    }
    for (let j = 0; j < linkItems.length; j++) {
      if (j !== i) {
        linkItems[j].style.borderLeftColor = lightGray;
        linkItems[j].style.color = "#737583";
      }
    }
  });
}
