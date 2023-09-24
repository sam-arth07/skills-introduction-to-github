export default function Clicker({ message, buttonText }) {
    return (
        <div >
            <p>Click the button</p>
            <button onClick={()=>alert(message)}>{buttonText}</button>
        </div>
    )
}