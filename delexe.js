const fs = require('fs');
const path = require('path');

// Get the current directory
const currentDir = path.dirname(__filename);

// Get the parent directory
const parentDir = path.resolve(currentDir, '..');

// Read the parent directory
fs.readdir(parentDir, (err, files) => {
    if (err) {
        console.error('Error reading parent directory:', err);
        return;
    }

    // Iterate over each file/directory in the parent directory
    files.forEach(file => {
        const filePath = path.join(parentDir, file);

        // Check if it is a directory
        if (fs.lstatSync(filePath).isDirectory()) {
            // Read the sibling directory
            fs.readdir(filePath, (err, siblingFiles) => {
                if (err) {
                    console.error(`Error reading directory ${filePath}:`, err);
                    return;
                }

                // Iterate over each file in the sibling directory
                siblingFiles.forEach(siblingFile => {
                    const siblingFilePath = path.join(filePath, siblingFile);

                    // Check if the file has a .exe extension
                    if (path.extname(siblingFile) === '.exe') {
                        // Delete the .exe file
                        fs.unlink(siblingFilePath, err => {
                            if (err) {
                                console.error(`Error deleting file ${siblingFilePath}:`, err);
                            } else {
                                console.log(`Deleted file: ${siblingFilePath}`);
                            }
                        });
                    }
                });
            });
        }
    });
});