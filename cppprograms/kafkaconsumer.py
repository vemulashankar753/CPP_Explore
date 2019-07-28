import sys #used to exit
from kafka import KafkaConsumer

KAFKA_TOPIC = 'demo'
KAFKA_BROKERS = '13.56.66.180,13.56.205.147,13.56.143.185' # see step 1
 
consumer = KafkaConsumer(KAFKA_TOPIC, bootstrap_servers=KAFKA_BROKERS, 
                         auto_offset_reset='earliest')
 
try:
    for message in consumer:
        print(message.value)
except KeyboardInterrupt:
    sys.exit()
