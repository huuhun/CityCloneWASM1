function openModalWithDelay(modalId, delay) {
    setTimeout(function() {
        $('#' + modalId).modal('show');
    }, delay);
}
