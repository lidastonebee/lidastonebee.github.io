# Check out solution URL
$ cat solution.txt
# Ensure the URL exists
$ curl --output /dev/null --silent --head --fail YourUsername.github.io && \echo "URL exists" || echo "URL does not exist"
