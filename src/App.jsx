import './App.css'
import Counter from './Counter'
import EmojiClicker from './EmojiClicker'
import ScoreKeeper from './ScoreKeeper'
import ScoreKeeperExercise from './ScoreKeeperExercise'

function App() {
  return (
    <div>
    {/* <h1>State Demo</h1> */}
    {/* <Counter /> */}
    {/* <ScoreKeeper /> */}
    {/* <EmojiClicker /> */}
    <ScoreKeeperExercise numPlayers={5} target={10}/>
    </div>)
}

export default App
