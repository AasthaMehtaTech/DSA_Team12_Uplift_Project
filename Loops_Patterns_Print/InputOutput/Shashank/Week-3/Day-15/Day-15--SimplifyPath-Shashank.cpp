class Solution {
private:
    deque<string> dentry_stack;
    
public:
    string simplifyPath(string path) {
        if (path.size() == 1)
            return path;
        string result = "/";
        int i = 0;
        dentry_stack.push_back("/");
        while (++i < path.size()) {
            string dentry;
			/* Get rid of duplicate '/' */
            while (i < path.size() && path[i] == '/')
                ++i;
			/* Add current directory name or file name to this dentry */
            while (i < path.size() && path[i] != '/')
                dentry.push_back(path[i++]);
            if (!dentry.compare(".")) {
				/* Just skip './' */
                continue;
            } else if (!dentry.compare("..")) {
				/* Remove the top dentry in dentry stack if the top is not root */
                if (dentry_stack.size() > 1)
                    dentry_stack.pop_back();
            } else if (dentry.length() > 0) {
				/* Add a valid dentry to dentry stack */
                dentry_stack.push_back(dentry);
            }
        }
		/* Iterate dentry stack to build the simplified path */ 
        for (int i = 1; i < dentry_stack.size(); ++i) {
            result.append(dentry_stack.at(i));
            result.push_back('/');
        }
        if (dentry_stack.size() > 1)
            result.pop_back();
        return result;
    }
};
