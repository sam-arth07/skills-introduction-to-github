import { useState } from 'react';
export default function Toggler(){
    const [state,setState] = useState(true)
    const changeState = ()=>setState(!state)
    return(
        <div>
        <h1>{state ? 'Happy':'Sad'}</h1>
        <button onClick={changeState}>Change State</button>
        </div>
    )
}