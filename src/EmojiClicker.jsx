import { useState } from "react"
import { v4 as uuid } from "uuid"
const randEmojiPicker = () => {
    const emojiArr = ["😀", "😃", "😋", "😇", "🗿", '😎', "💪🏻"]
    const randIndx = Math.floor(Math.random() * emojiArr.length)
    return emojiArr[randIndx]
}
export default function EmojiClicker() {
    const [emoji, setEmoji] = useState([{ id: uuid(), emoji: randEmojiPicker() }])
    const addEmoji = () => {
        setEmoji((prevEmoji) =>
            [...prevEmoji, { id: uuid(), emoji: randEmojiPicker() }])
    }
    const delEmoji = (id) => {
        setEmoji(prevEmoji => { return prevEmoji.filter(e => e.id !== id) })
    }
    const updateEmoji = () => {
        setEmoji(prevEmoji => {
            return prevEmoji.map(e => {
                return { ...e, emoji: "💖" }
            })
        })
    }
    return (
        <div>
            {emoji.map(e => (
                <span key={e.id} style={{ fontSize: '3rem' }} onClick={() => delEmoji(e.id)}>
                    {e.emoji}
                </span>))
            }
            <button onClick={addEmoji}>Add Emoji</button>
            <button onClick={updateEmoji}>Make all emoji's heart</button>
        </div >
    )
}