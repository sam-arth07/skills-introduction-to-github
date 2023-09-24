import { useState } from 'react';
export default function ToggleCounter(){
    const [state,setState] = useState(true)
    const [count,setCount] = useState(0)
    const changeState = ()=>setState(!state)
    const changeCount = ()=>setCount(count+1)
    return(
        <div>
        <h1>{state ? 'Happy':'Sad'}</h1>
        <button onClick={changeState}>Change State</button>
        <p>{count}</p>
        <button onClick={changeCount}>+</button>
        </div>
    )
}