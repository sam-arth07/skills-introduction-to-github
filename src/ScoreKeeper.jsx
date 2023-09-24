import { useState } from "react";

export default function ScoreKeeper() {
    const [scores, setScores] = useState({ p1: 0, p2: 0 })
    function increaseP1Score() {
        setScores((oldScore) => {
            return { ...oldScore, p1: oldScore.p1 + 1 }
        })
    }
    function increaseP2Score() {
        setScores((oldScore) => {
            return { ...oldScore, p2: oldScore.p2 + 1 }
        })
    }
    return (
        <>
        <div>
            <span>Player 1: {scores.p1}</span>
            <button onClick={increaseP1Score}>+1 for Player1</button>
        </div>
        <div>
            <span>Player 2: {scores.p2}</span>
            <button onClick={increaseP2Score}>+1 for Player2</button>
        </div>
        </>
    )
}