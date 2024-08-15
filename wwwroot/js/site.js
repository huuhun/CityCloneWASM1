function openModalWithDelay(modalId, delay) {
    setTimeout(function() {
        $('#' + modalId).modal('show');
    }, delay);
}

function closeDropdownAndNavigate(dropdownId, url, delay) {
    setTimeout(function() {
        var dropdown = document.getElementById(dropdownId);
        if (dropdown) {
            var bsDropdown = new bootstrap.Dropdown(dropdown);
            bsDropdown.hide();
        }
        window.location.href = url;
    }, delay);
}
