import { useState } from "react";

export default function Colorbox({ colors }) {
    let randColorIndx = Math.floor(Math.random() * colors.length)
    const [color, setColor] = useState(colors[randColorIndx])
    const changeColor = () => {
        let randColorIndx = Math.floor(Math.random() * colors.length)
        setColor(colors[randColorIndx])
    }
    return (
        <div onClick={changeColor} style={{ backgroundColor: color,height:"20%",width:"20%" }}>
        </div>
    )
}