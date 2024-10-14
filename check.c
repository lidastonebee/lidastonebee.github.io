# Check out solution URL
$ cat solution.txt
# Ensure the URL exists
$ curl --output /dev/null --silent --head --fail lidastonebee.github.io && \echo "URL exists" || echo "URL does not exist"
