import Property from './Property';
export default function PropertyList({ properties }) {
    return (
        <div style={{display:'flex'}}>
            {properties.map(property => (
                <Property key={property.id} {...property} />
            ))}
        </div>
    )
}