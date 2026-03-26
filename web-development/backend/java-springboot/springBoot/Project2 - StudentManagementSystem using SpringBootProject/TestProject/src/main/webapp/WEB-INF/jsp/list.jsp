<html>
<body>
<h2>All Students</h2>

<table border="1">
<tr><th>ID</th><th>Name</th></tr>

<c:forEach var="s" items="${students}">
    <tr>
        <td>${s.stuId}</td>
        <td>${s.stuName}</td>
    </tr>
</c:forEach>

</table>

</body>
</html>
