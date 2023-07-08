for (int i = 0; i < result.size() - 1; i++)
        {
            if (result[i] == result[i + 1])
            {
                st.push(result[i]);
                i++;
            }
        }