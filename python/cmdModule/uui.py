import uuid

# Generate a UUID
my_uuid = uuid.uuid4()

# Access the UUID components
uuid_fields = my_uuid.fields

# Print the UUID components
print("UUID Fields:", uuid_fields)


# Generate a UUID
my_uuid = uuid.uuid4()

# Access the integer representation
uuid_int = my_uuid.int

# Print the integer representation
print("UUID Int:", uuid_int)

my_uuid = uuid.uuid4()

# Access the variant
uuid_variant = my_uuid.variant

# Print the variant
print("UUID Variant:", uuid_variant)

my_uuid = uuid.uuid4()

# Access the version
uuid_version = my_uuid.version

# Print the version
print("UUID Version:", uuid_version)

# Get the hardware address
mac_address = uuid.getnode()

# Print the MAC address
print("MAC Address:", mac_address)


# Generate a version 3 UUID based on a URL
url_uuid_3 = uuid.uuid3(uuid.NAMESPACE_URL, 'https://example.com')

# Generate a version 5 UUID based on a URL
url_uuid_5 = uuid.uuid5(uuid.NAMESPACE_URL, 'https://example.com')

# Print the generated UUIDs
print("Version 3 UUID (URL):", url_uuid_3)
print("Version 5 UUID (URL):", url_uuid_5)

