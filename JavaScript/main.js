$(document).ready(function () {
    $('#click').click(function () {
        alert('Clicked');
    });
    setTimeout(function () {
        $('#click').trigger('click');
    }, 10000);
});