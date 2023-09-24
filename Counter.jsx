import { useState } from 'react';
export default function Counter() {
    const [color, setColor] = useState('red');
    const changecolor = () => {
        setColor('green')
    }
    return (
        <div>
            <p>The color is :{color}</p>
            <button style={{backgroundColor:color}} onClick={changecolor}>Increment</button>
        </div>
    )
}