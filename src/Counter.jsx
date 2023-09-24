import { useState } from "react";

export default function Counter(){
    const [count,setCount]=useState(0);
    const changeCount3 = () => {
        setCount((currentCount)=>currentCount+1)
        setCount((currentCount)=>currentCount+1)
        setCount((currentCount)=>currentCount+1)
    }
    return(
        <div>
            <button onClick={changeCount3}>Count : {count}</button>
        </div>
    )
}