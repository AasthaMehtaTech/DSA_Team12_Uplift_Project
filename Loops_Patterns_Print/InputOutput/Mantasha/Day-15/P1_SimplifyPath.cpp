class Solution {
public:
    string simplifyPath(string path) {
        stack<string> path_parts;
        stringstream sstream { path };
        
        string buffer;
        buffer.reserve(path.size());  // reserve max-space to avoid allocations

        // split the string using '/' as delimiter
        while (getline(sstream, buffer, '/')) {
            if (buffer.empty() || buffer == ".") {
                continue;
            }
            if (buffer == "..") {
                if (!path_parts.empty()) {
                    path_parts.pop();
                }
            } else {
                path_parts.push(buffer);
            }
        }

        // clear the buffer, use it to rebuild the path
        buffer.clear();

        while (!path_parts.empty()) {
            auto part = path_parts.top();
            path_parts.pop();
            buffer.insert(0, "/" + part);
        }

        return buffer.empty() ? "/" : buffer;
    }
};
