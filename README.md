# 🌐 NanoWeb

Welcome to NanoWeb, your tiny but mighty HTTP server built from scratch using only native C++ libraries! NanoWeb is capable of handling simple GET/POST requests, serving files, and managing multiple concurrent connections.

## ✨ Features

- 📬 **GET and POST Requests:** Supports basic GET and POST requests.
- 📂 **Static File Serving:** Serves HTML, CSS, and JS files.
- 🗺️ **Routing System:** Basic routing for different endpoints.
- 📝 **Request Logging:** Logs requests with timestamps and client IP addresses.
- 🤹‍♂️ **Concurrent Connections:** Handles multiple connections simultaneously.
- 🎉 **Fun Endpoints:** Echo and reverse your POST data!

## 🚀 Getting Started

### 🛠️ Prerequisites

- 🪟 Windows environment
- 🛠️ MinGW or any other C++ compiler that supports C++11

### 📂 File Structure

Here's what your project directory should look like:

```
NanoWeb/
│
├── about.html
├── index.html
├── scripts.js
├── styles.css
├── main.cpp
├── server.cpp
└── server.h
```

### ⚙️ Compilation

Open your terminal and navigate to the project directory. Run the following command to compile the server:

```sh
g++ -std=c++11 -o http_server main.cpp server.cpp -lws2_32
```

### ▶️ Running the Server

After successful compilation, start the server with:

```sh
.\http_server.exe
```

By default, the server listens on port 8080. You can specify a different port by passing it as an argument:

```sh
.\http_server.exe <port_number>
```

## 🧑‍💻 Using NanoWeb

### 🌐 Serving Web Pages

1. **Open your web browser and navigate to `http://localhost:8080` to see the home page.**
2. **Click the link to go to the About page (`http://localhost:8080/about`).**
3. **You should see the CSS styles applied and the JavaScript working (click the heading to see an alert).**

### 📬 Testing POST Routes

To test the POST routes, you can use Postman or any other API testing tool.

1. **Open Postman and create a new request.**
2. **Set the request type to POST.**
3. **Enter the URL: `http://localhost:8080/api/echo` or `http://localhost:8080/api/reverse`**
4. **In the "Body" tab, select "raw" and choose "JSON" from the dropdown.**
5. **Enter some JSON data, e.g., `{"message": "Hello, World!"}`**
6. **Click "Send" to make the request.**

For the `/api/echo` endpoint, you should receive the same JSON data back. For the `/api/reverse` endpoint, you should receive the reversed string.

## 🤝 Contributing

Got a cool idea to make NanoWeb even better? Feel free to fork the repository and submit a pull request. Contributions are always welcome!

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
