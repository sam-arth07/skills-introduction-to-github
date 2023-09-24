import './App.css';
import Slot from './slot';
import ShoppingList from './ShoppingList'
import PropertyList from "./PropertyList"
import Clicker from './Clicker'
import Counter from './Counter';
import Toggler from './Toggler';
import ToggleCounter from './ToggleCounter';
import Colorboxes from './Colorboxes';
const sprites = ["🍒", "7", "🍓", "🍌"]
const data = [
  { id: 1, item: 'Banana', quantity: 6, completed: false },
  { id: 2, item: 'Apple', quantity: 4, completed: true },
  { id: 3, item: 'Bottleguard', quantity: 1, completed: false },
  { id: 4, item: 'Potato', quantity: 10, completed: true }
]
const properties = [
  { id: 129031, name: "Desert Yurt", rating: 4.9, price: 150 },
  { id: 129331, name: "Lone Mountain Cabin", rating: 4.8, price: 250 },
  { id: 129032, name: "Cactus Retreat", rating: 4.75, price: 300 },
  { id: 129033, name: "Redwood Treehouse Escape", rating: 4.9, price: 120 },
  { id: 129034, name: "Oceanview Condo", rating: 4.7, price: 140 },
  { id: 129035, name: "Gold Miner Campground", rating: 4.69, price: 96 },
];
export default function App() {
  return (
    // <div>
    //   <h1 style={{ color: 'teal' }}>Welcome To Casino Lando!</h1>
    //   <h2>Here is your Slot Machine :</h2>
    //   <Slot
    //     val1={sprites[(Math.floor(Math.random() * sprites.length))]}
    //     val2={sprites[(Math.floor(Math.random() * sprites.length))]}
    //     val3={sprites[(Math.floor(Math.random() * sprites.length))]} />
    // </div>
    // <ShoppingList items={data} />
    // <PropertyList properties={properties} />
    // <Clicker message="Moshi Mosh! Orewa MonkeyD.Luffy. Kaizoku ni naruo Otokoda" buttonText="Click Me"/>
    // <Toggler/>
    // <Counter/>
    // <ToggleCounter />
    <Colorboxes colors={['red', 'blue', 'green', 'yellow', 'teal', 'orangered', 'pink', 'black', 'white', 'magenta', 'lightgreen','brown']} />
  )
}
