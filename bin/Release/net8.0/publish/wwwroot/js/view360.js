function callDotNetFunctionFromJS(functionName) {
    DotNet.invokeMethod('YourProjectName.Client', functionName);
}