FROM arm64v8/ubuntu

#Setup valgrind ENVIROMENT
RUN apt-get update && apt-get install -y cmake git gcc g++ valgrind


