import Colorbox from "./Colorbox"
import './ColorBoxes.css'
export default function Colorboxes({ colors }) {
    let boxes = []
    for (let index = 0; index < 25; index++) {
        boxes.push(<Colorbox colors={colors} />);
    }
    return (
        <div className="ColorBoxes">
        {boxes}
        </div>
    )
}