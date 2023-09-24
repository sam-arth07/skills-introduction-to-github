export default function ShoppingListItem({ item, quantity, completed }) {
    const styles = {
        color: completed ? 'green' : 'teal',
        textDecoration: completed ? 'line-through' : 'none'
    }
    return (
        <li
            style={styles}>
            {item} - {quantity}
        </li>
    )

}