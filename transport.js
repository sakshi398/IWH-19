const cafeList = document.querySelector('#cafe-list');
const form = document.querySelector('#add-cafe-form');


// create element & render cafe

function renderCafe(doc){

    let li = document.createElement('li');

    let name = document.createElement('span');

    let location = document.createElement('span');
     let price = document.createElement('span');
    
    let bus = document.createElement('button');

    li.setAttribute('data-id', doc.id);

    name.textContent = doc.data().name;

     location.textContent = doc.data().location;
    
      price.textContent = doc.data().price;
    bus.textContent = "Bus confirmation";
  

    li.appendChild(name);

    
   li.appendChild(location);
   li.appendChild(price);
  li.appendChild(bus);
   

    cafeList.appendChild(li);
  
bus.onclick = function() {
  window.location.replace("https://www.redbus.in/");
}
}



// getting data

db.collection('Market').where('location','==','Ajmer').get().then(snapshot => {

    snapshot.docs.forEach(doc => {

        renderCafe(doc);

    });

});
// saving data
 


form.addEventListener('submit', (e) => {

    e.preventDefault();

    db.collection('Transport').add({

        name: form.name.value,
        location: form.location.value
       
    });

    form.name.value = '';

    form.location.value = '';
   
    

});