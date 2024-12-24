import express from "express";
import bodyParser from "body-parser";
import authRoutes from "./routes/auth.js";

const app = express();
app.use(bodyParser.json());
app.use("/auth", authRoutes);

export default app;

