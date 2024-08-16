function openModalWithDelay(modalId, delay) {
    setTimeout(function() {
        $('#' + modalId).modal('show');
    }, delay);
}

function closeBootstrapDropdown(buttonId) {
    var button = document.getElementById(buttonId);
    if (button) {
        var dropdown = bootstrap.Dropdown.getInstance(button);
        if (dropdown) {
            dropdown.hide();
        }
    }
}