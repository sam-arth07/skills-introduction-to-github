import { useState } from "react"
export default function ScoreKeeperExercise({ numPlayers = 3, target = 5 }) {
    const [scores, setScores] = useState(new Array(numPlayers).fill(0))
    const increaseScore = (ind) => {
        setScores(prevScore => {
            return prevScore.map((s, i) => {
                if (s===target){
                    return target
                }
                return i === ind ? s + 1 : s;
            })
        })
    }
    const resetScore = () =>{
        setScores(new Array(numPlayers).fill(0))
    }
    return (
        <div>
            <h1>Score Keeper</h1>
            <ul>
                {
                    scores.map((score, ind) => {
                        return (
                        <li key={ind}>
                            Player{ind + 1} : {score} 
                            <button onClick={() => increaseScore(ind)}> +1 for Player{ind + 1}</button>
                            {score===target&&" Winner!"}
                        </li>)
                    })
                }
            </ul>
            <button onClick={resetScore}>Reset</button>
        </div>
    )
}