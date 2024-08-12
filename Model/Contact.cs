using System.ComponentModel.DataAnnotations;

public class Contact
{
    [Required(ErrorMessage = "Hãy điền họ tên.")]
    public string Name { get; set; }

    [Required(ErrorMessage = "Hãy điền Email.")]
    [EmailAddress(ErrorMessage = "Email không hợp lệ.")]
    public string Email { get; set; }

    [Required(ErrorMessage = "Hãy điền tên công ty.")]
    public string Company { get; set; }

    [Required(ErrorMessage = "Hãy điền số điện thoại.")]
    public string Phone { get; set; }

    public string Message { get; set; }
}
