import app from './src/app.js';

const PORT = process.argv[2] || 3000;
app.listen(PORT, () => {
  console.log(`Server is running on http://localhost:${PORT}`);
});

