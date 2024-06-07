
// ------------------------------- navbar hide show js ------------------------------------/

$(".bx-menu").on("click",function(){
  $("#sideBar").toggle()
})


// ------------------------------- panel change js ------------------------------------/

$("#Icons,#Google,#Profile,#Tables,#Login,#Register,#Logout").hide();


$("#sideBar>button").on("click",function(){
    $("#Dashboard,#Icons,#Google,#Profile,#Tables,#Login,#Register,#Logout").hide();
  $($(this).attr("for")).show();
  $("#sideBar").hide();
})



onresize = function(){
    if(visualViewport.width <= 600){
             $("#sideBar").hide();
    }
}


// ------------------------------- chart-1 js ------------------------------------/

var options = {
  series: [{
  name: 'series1',
  data: [31, 40, 28, 51, 42, 109, 100]
}, {
  name: 'series2',
  data: [11, 32, 45, 32, 34, 52, 41]
}],
  chart: {
  height: 350,
  type: 'area'
},
dataLabels: {
  enabled: false
},
stroke: {
  curve: 'smooth'
},
xaxis: {
  type: 'datetime',
  categories: ["2018-09-19T00:00:00.000Z", "2018-09-19T01:30:00.000Z", "2018-09-19T02:30:00.000Z", "2018-09-19T03:30:00.000Z", "2018-09-19T04:30:00.000Z", "2018-09-19T05:30:00.000Z", "2018-09-19T06:30:00.000Z"]
},
tooltip: {
  x: {
    format: 'dd/MM/yy HH:mm'
  },
},
};

var chart = new ApexCharts(document.querySelector("#chart-1"), options);
chart.render();


// ------------------------------- calander js ------------------------------------/

var calendarInstance1 = new calendarJs("calendar", {
  manualEditingEnabled: true,
});




